<?php
function status2 ($status, $last_kont)
{	
    //��������������� �� "���������"
        //echo $zay_view[16]."<br>";//��������!
        $data_m=explode('-', $last_kont);
        $d1=$data_m[2];
        $m1=$data_m[1];
        $y1=$data_m[0];		  
        if ($d1>0 && $m1>0 && $y1>0)
        {
          $timestamp1=mktime(0, 0, 0, $m1, $d1, $y1);
          $timestamp2=mktime(0, 0, 0, date("m"), date("d"), date("y"));
          //echo '<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;d = '.date("d").' m = '.date("m").' y = '.date("y").'<br>';//��������!
          //echo "timestamp1 = ".$timestamp1." | timestamp2 = ".$timestamp2."<br>";//��������!
          if ($timestamp1<=$timestamp2)
          {
            $c_man='red';
            $c_kl='';	
          }
          elseif ($timestamp1>$timestamp2)
          {
            $c_man='';
            $c_kl='yellow';	
          }
        }




    //��������������� �� ��������
		switch ($status)
		{
			case 1:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<span class="green">&nbsp; � &nbsp;</span><br>�����: ����� ������ ����������';
				break;
			case 2:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<span class="green">&nbsp; � &nbsp;</span><br>��������: ������ � ������';			
				break;
			case 3:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="red">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>�����: ������������� ����������, ������� �� ��������';
				break;
			case 4:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<span class="green">&nbsp; � &nbsp;</span><br>��������: ������� ������� ������������� �����';			
				break;
			case 5:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="red">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>�����: ������������� ����������, ������� �� ��������';
				break;
			case 6:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span><span class="blue">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<br>��������: ������������� ����������';			
				break;
			case 7:
				$znachenie='<span class="yellow">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>��������: ������� ������� ������������� �����';
				break;
			case 8:
				$znachenie='<span class="yellow">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>��������: �������� ������ �������';			
				break;
			case 9:
				$znachenie='<span class="yellow">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>��������: ��������� ����';
				break;					
			case 10:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span><span class="blue">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<br>��������: ���� �������, ���� ������';			
				break;
			case 11:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<span class="green">&nbsp; � &nbsp;</span><br>�����: ������ ���������, �������� �����';
				break;
			case 12:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span><span class="blue">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<br>�����: ����� ������������ �� �����';			
				break;
			case 13:
				$znachenie='<span class="yellow">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>�����: �������� ������';
				break;
			case 14:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span><span class="blue">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<br>��������: ����������';			
				break;
			case 15:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>�����: ������ �������';
				break;	
			case 16:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>��������: ����� �������';
				break;
			case 17:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>��������: �� �������� �������, ������������ ������';			
				break;
			case 18:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span><span class="blue">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<br>��������: ��������� � ������';
				break;	
			case 19:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<span class="green">&nbsp; � &nbsp;</span><br>��������: ���������� ���������';
				break;
			case 20:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span><span class="blue">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<br>��������: ������������� ����������';
				break;
			case 21:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span><span class="blue">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<br>��������: ���������� ���. ���������� �� �������';
				break;
			case 22:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="red">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>�����: ���������� ���. ���������� �� �������';
				break;
			case 23:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="red">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;&nbsp; � &nbsp;<br>�����: ������������� ����������, ������� �� ��������';
				break;
			default:
				$znachenie='<span class="'.$c_kl.'">&nbsp; � &nbsp;</span><span class="'.$c_man.'">&nbsp; � &nbsp;</span><span class="blue">&nbsp; � &nbsp;</span>&nbsp; � &nbsp;<br>��������� ����� ������';			
				break;
		}	
		return($znachenie);
}

function status1 ($status)
{	
		switch ($status)
		{
			case 1:
				$znachenie='����������';
				break;
			case 2:
				$znachenie='� ������';			
				break;
			case 3:
				$znachenie='������������� �����, ������� �� �������';
				break;
			case 4:
				$znachenie='������������� ����� ������� �������';			
				break;
			case 5:
				$znachenie='������������� ����� �������� �� �������';
				break;
			case 6:
				$znachenie='����� �������';			
				break;
			case 7:
				$znachenie='��� ����� �������';
				break;
			case 8:
				$znachenie='�������� ������ �������';			
				break;
			case 9:
				$znachenie='��������� ����';
				break;					
			case 10:
				$znachenie='�������� �������';			
				break;
			case 11:
				$znachenie='������� ������';
				break;
			case 12:
				$znachenie='�������� �� �����';			
				break;
			case 13:
				$znachenie='�������� ������';
				break;
			case 14:
				$znachenie='����������';			
				break;
			case 15:
				$znachenie='������ �������';
				break;	
			case 16:
				$znachenie='����� �������';
				break;
			case 17:
				$znachenie='�� �������� ������� (����������)';			
				break;
			case 18:
				$znachenie='������ ���������/��������';
				break;	
			default:
				$znachenie='�����';			
				break;
		}	
		return($znachenie);
}
function prioritet ($prioritet)
{	
		switch ($prioritet)
		{
			case 0:
				$znachenie='����� �������';			
				break;
			case 1:
				$znachenie='�������';
				break;
			case 2:
				$znachenie='�������';			
				break;
			case 3:
				$znachenie='������';
				break;
			case 4:
				$znachenie='����� ������';			
				break;
		}	
		return($znachenie);
}
function prioritet_hidden ($prioritet)
{	
		switch ($prioritet)
		{
			case 0:
				$znachenie='Snabzenec';			
				break;
			case 1:
				$znachenie='GruzSnab';			
				break;
			case 2:
				$znachenie='������ ������';
				break;
			case 3:
				$znachenie='WorldSnab';
				break;
		}	
		return($znachenie);
}
function firma_obr ($firma_obr)
{	
		switch ($firma_obr)
		{
			case 0:
				$znachenie='<span class="blue">LiderGruz</span>';			
				break;
			case 1:
				$znachenie='<span class="yellow">Zavod-Leader</span>';			
				break;
			case 2:
				$znachenie='<span class="green">SuperSkoba</span>';
				break;
			case 3:
				$znachenie='<span class="red">MGSnab</span>';
				break;
			case 4:
				$znachenie='���������';
				break;
			case 5:
				$znachenie='<span class="orange">Worldsnab</span>';
				break;
			case 6:
				$znachenie='����';
				break;
		}	
		return($znachenie);
}

function status_commerc ($commerc)
{	
		switch ($commerc)
		{
			case 0:
				$znachenie='���';			
				break;
			case 1:
				$znachenie='����';
				break;
			case 2:
				$znachenie='�����.';			
				break;
		}	
		return($znachenie);
}
function status_obrab ($obr)
{	
		switch ($obr)
		{
			case 1:
				$znachenie='�����';			
				break;
			case 2:
				$znachenie='�����';
				break;
			default:
				$znachenie='����� �� ���.';			
				break;
		}	
		return($znachenie);
}
function status_instrukt($inst)
{	
		switch ($inst)
		{
			case 1:
				$znachenie='����';			
				break;
			default:
				$znachenie='���';			
				break;
		}	
		return($znachenie);
}
function status_otrabotka ($otrabotka)
{	
		switch ($otrabotka)
		{
			case 0:
				$znachenie='�� ������� � ���������';			
				break;
			case 1:
				$znachenie='������� � ��������, �������� �� �����';
				break;
			case 2:
				$znachenie='�������, �������������� ������';			
				break;
			case 3:
				$znachenie='�������, ���� ������������� ����������';
				break;
			case 4:
				$znachenie='�������, ����. ����������, ����� � ���������';			
				break;
			case 5:
				$znachenie='������ ����������';			
				break;
		}	
		return($znachenie);
}
?>