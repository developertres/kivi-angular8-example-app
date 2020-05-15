import { NgModule } from "@angular/core";
import { CommonModule } from '@angular/common';
import { RouterModule } from '@angular/router';
import { FormsModule, ReactiveFormsModule } from '@angular/forms';
import { QuillModule } from 'ngx-quill';

import { AdminLayoutComponent } from './shared/components/admin-layout/admin-layout.component';
import { LoginPageComponent } from './login-page/login-page.component';
import { DashboardPageComponent } from './dashboard-page/dashboard-page.component';
import { CreateOrderComponent } from './create-order/create-order.component';
import { EditOrderPageComponent } from './edit-order-page/edit-order-page.component';
import { AuthGuard } from './shared/auth.guard';
import { OrdersService } from './shared/services/orders.service';
import { SearchPipe } from './shared/search.pipe';

@NgModule({
    declarations: [
        AdminLayoutComponent,
        LoginPageComponent,
        DashboardPageComponent,
        EditOrderPageComponent,
        CreateOrderComponent,
        SearchPipe
    ],
    imports: [
        CommonModule,
        FormsModule,
        ReactiveFormsModule,        
        QuillModule.forRoot(),
        RouterModule.forChild([
          {
            path: '', component: AdminLayoutComponent, children: [
              {path: '', redirectTo: '/admin/login', pathMatch: 'full'},
              {path: 'login', component: LoginPageComponent},
              {path: 'dashboard', component: DashboardPageComponent, canActivate: [AuthGuard]},
              {path: 'create-order', component: CreateOrderComponent, canActivate: [AuthGuard]},
              {path: 'order/:id/edit', component: EditOrderPageComponent, canActivate: [AuthGuard]}
            ]
          }
        ])
    ],
    exports: [RouterModule, QuillModule],
    providers: [AuthGuard, OrdersService]
    
})
export class AdminModule {

}
