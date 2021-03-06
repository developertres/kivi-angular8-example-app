import { Component, OnInit, OnDestroy } from '@angular/core';
import { ActivatedRoute, Params } from '@angular/router';
import { OrdersService } from '../shared/services/orders.service';
import { switchMap } from 'rxjs/operators';
import { FormBottom } from 'src/app/shared/classes/form-bt-class';
import { FormGroup, FormControl, Validators } from '@angular/forms';
import { FormValidators } from 'src/app/shared/form.validators';
import { Subscription } from 'rxjs';
import { AlertService } from '../shared/services/alert.service';

@Component({
  selector: 'app-edit-order-page',
  templateUrl: './edit-order-page.component.html',
  styleUrls: ['./edit-order-page.component.css']
})
export class EditOrderPageComponent implements OnInit, OnDestroy {

  form: FormGroup

  order: FormBottom

  submitted = false

  updateSub: Subscription

  // Виды услуг для селектора в шаблоне
  typeofacts: string[] = ["Рафтинг", "Проведение мероприятий", "Туры / Походы", "Аренда площадок", "Аренда байдарок", "Прогулки на каяках", "Другое"];    

  constructor(
    private route: ActivatedRoute,
    private orderService: OrdersService,
    private alertService: AlertService
  ) { }

  ngOnInit() {
    this.route.params.pipe(
      switchMap( (params: Params) => {
        return this.orderService.getById(params['id'])
      })
    ).subscribe( (order: FormBottom) => {
      this.order = order,
      this.form = new FormGroup({
        order_name: new FormControl(order.name, [
          Validators.required,
          Validators.minLength(2),
          Validators.maxLength(30),
          FormValidators.userName
        ]),
        order_phone: new FormControl(order.phone, [
          Validators.required, 
          Validators.minLength(6),
          Validators.maxLength(20),
          FormValidators.userPhone
        ]),
        order_email: new FormControl(order.email, [
          Validators.email
        ]),
        order_typeofact: new FormControl(order.typeofact, Validators.required),
        order_text: new FormControl(order.text, [
          Validators.required,
          Validators.maxLength(500)
        ]),
        order_promo: new FormControl(order.promo, [
          Validators.minLength(3),
          Validators.maxLength(30),
          FormValidators.userPromo
        ]) 
      })
    }) 
  }

  submit() {
    if(this.form.invalid) {
      return 
    }

    this.submitted = true

    this.updateSub = this.orderService.updateOrder({
      ...this.order,
      name: this.form.value.order_name, 
      phone: this.form.value.order_phone,
      email: this.form.value.order_email,
      typeofact: this.form.value.order_typeofact, 
      text: this.form.value.order_text, 
      promo: this.form.value.order_promo
    }).subscribe( ()=> {
      this.submitted = false
      this.alertService.warning(`Заказ № ${this.order.id} был обновлен`)
    })

  }

  ngOnDestroy() {
    if (this.updateSub) {
      this.updateSub.unsubscribe()
    } 
    
  }

}
