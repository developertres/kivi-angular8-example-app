import { Component, OnInit } from '@angular/core';
import { FormsService } from '../shared/services/forms.service';

import { ClickForm } from '../shared/classes/click-class'

@Component({
  selector: 'app-semeyniy-rafting',
  templateUrl: './semeyniy-rafting.component.html',
  styleUrls: ['./semeyniy-rafting.component.css']
})
export class SemeyniyRaftingComponent {

  modal_switcher: boolean; // Свитчер включения окна с формой 

  constructor(private formsService: FormsService) { }

  // Обрабатываем клики для открытия в модальном окне форм topForm, questionForm, callorderForm
  openFormClick(openClick: ClickForm) {
    this.formsService.openForm(openClick);
  }

}
