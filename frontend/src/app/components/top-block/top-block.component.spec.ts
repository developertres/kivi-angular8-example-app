import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { TopBlockComponent } from './top-block.component';
import { FormsService } from '../../services/forms.service';
import { ClickForm } from '../../classes/click-class'

describe('TopBlockComponent', () => {
  let component: TopBlockComponent;
  let fixture: ComponentFixture<TopBlockComponent>;
  let forms: FormsService;
  let spy: jasmine.Spy;
  const openFormStub = {
    openForm: (openClickStub: ClickForm) => {}
  };  

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ TopBlockComponent ],
      providers: [ { provide: FormsService, useValue: openFormStub } ]
    })
    .compileComponents();
    forms = TestBed.get(FormsService);
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(TopBlockComponent);
    component = fixture.componentInstance;  
    fixture.detectChanges();  
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });

  it('should called openForm', () => {
    spy = spyOn(forms, 'openForm');
    const openClick: ClickForm = {typeofform: 2, typeofact: 'Рафтинг'};
    forms.openForm(openClick);    
    expect(spy.calls.any()).toBeTruthy();
  });

});
