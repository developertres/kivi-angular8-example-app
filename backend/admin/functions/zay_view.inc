<?php

function prioritet_view ($prioritet, $rul)
{	
       	if ($rul==3)
		{
			switch ($prioritet)
			{
				case 0:
					$sel0='selected';			
					break;
				case 1:
					$sel1='selected';
					break;
				case 2:
					$sel2='selected';			
					break;
				case 3:
					$sel3='selected';
					break;
				case 4:
					$sel4='selected';			
					break;
			}
			echo "
			<select name='zay_prioritet'>\n
				<option value='0' $sel0>����� �������\n</option>
				<option value='1' $sel1>�������\n</option>
				<option value='2' $sel2>�������\n</option>
				<option value='3' $sel3>������\n</option>
				<option value='4' $sel4>����� ������\n</option>			
			</select>";
		}
		elseif ($rul==2 xor $rul==1)
		{
			switch ($prioritet)
			{
				case 0:
					$sel='����� �������';			
					break;
				case 1:
					$sel='�������';
					break;
				case 2:
					$sel='�������';			
					break;
				case 3:
					$sel='������';
					break;
				case 4:
					$sel='����� ������';			
					break;
			}
			echo "<b>$sel</b>";	
		}
}
function prioritet_hidden_view ($prioritet)
{	
		switch ($prioritet)
		{
			case 0:
				$sel0='selected';			
				break;
			case 1:
				$sel1='selected';
				break;
			case 2:
				$sel2='selected';			
				break;
			case 3:
				$sel3='selected';			
				break;
		}
		echo "
		<select name='zay_hidden_prioritet'>\n
		<option value='0' $sel0>Snabzenec\n</option>
		<option value='1' $sel1>GruzSnab\n</option>
		<option value='3' $sel3>WorldSnab\n</option>
		<option value='2' $sel2>������ ������\n</option>		
		</select>";
}
function firma_obr_view ($firma_obr)
{	
		switch ($firma_obr)
		{
			case 0:
				$sel0='selected';			
				break;
			case 1:
				$sel1='selected';
				break;
			case 2:
				$sel2='selected';			
				break;
			case 3:
				$sel3='selected';			
				break;
			case 4:
				$sel4='selected';			
				break;
			case 5:
				$sel5='selected';			
				break;
			case 6:
				$sel6='selected';			
				break;
		}
		echo "
		<select name='zay_firma_obr'>\n
		<option value='0' $sel0>LiderGruz\n</option>
		<option value='1' $sel1>Zavod-Leader\n</option>
		<option value='2' $sel2>SuperSkoba\n</option>
		<option value='3' $sel3>MGSnab\n</option>
		<option value='4' $sel4>���������\n</option>	
		<option value='5' $sel5>Worldsnab\n</option>	
		<option value='6' $sel6>���� (��. � �����������)\n</option>					
		</select>";
}

function status_view ($status)
{	
		switch ($status)
		{
			case 1:
				$sel1='selected';
				break;
			case 2:
				$sel2='selected';			
				break;
			case 3:
				$sel3='selected';
				break;
			case 4:
				$sel4='selected';			
				break;
			case 5:
				$sel5='selected';
				break;
			case 6:
				$sel6='selected';			
				break;
			case 7:
				$sel7='selected';
				break;
			case 8:
				$sel8='selected';			
				break;
			case 9:
				$sel9='selected';
				break;					
			case 10:
				$sel10='selected';			
				break;
			case 11:
				$sel11='selected';
				break;
			case 12:
				$sel12='selected';			
				break;
			case 13:
				$sel13='selected';
				break;
			case 14:
				$sel14='selected';			
				break;
			case 15:
				$sel15='selected';
				break;	
			case 16:
				$sel16='selected';
				break;
			case 17:
				$sel17='selected';			
				break;
			case 18:
				$sel18='selected';
				break;	
			case 19:
				$sel19='selected';			
				break;
			case 20:
				$sel20='selected';
				break;	
			case 21:
				$sel21='selected';
				break;
			case 22:
				$sel22='selected';			
				break;
			case 23:
				$sel23='selected';
				break;
			default:
				$sel0='selected';		
				break;
		}	
		echo "		
		<option value='0' $sel0>��������: ��������� ����� ������\n</option>
		<option value='1' $sel1>�����: ����� ������ ����������\n</option>
		<option value='19' $sel19>��������: ���������� ���������\n</option>		
    <option value='2' $sel2>��������: ������ � ������\n</option>
		<option value='20' $sel20>��������: ������������� ����������\n</option>
		<option value='6' $sel6>��������: ������������� ����������\n</option>
		<option value='21' $sel21>��������: ���������� ���. ���������� �� �������\n</option>
		<option value='22' $sel22>�����: ���������� ���. ���������� �� �������\n</option>
		<option value='3' $sel3>�����: ������������� ����������, ������� �� ��������\n</option>
		<option value='23' $sel23>�����: ������������� ����������, ������� �� ��������\n</option>
		<option value='18' $sel18>��������: ��������� � ������\n</option>
		<option value='4' $sel4>��������: ������� ������� ������������� �����\n</option>
		<option value='7' $sel7>��������: ������� ������� ������������� �����\n</option>
		<option value='8' $sel8>��������: �������� ������ �������\n</option>
		<option value='9' $sel9>��������: ��������� ����\n</option>
		<option value='10' $sel10>��������: ���� �������, ���� ������\n</option>
		<option value='11' $sel11>�����: ������ ���������, �������� �����\n</option>
		<option value='12' $sel12>�����: ����� ������������ �� �����\n</option>
		<option value='13' $sel13>�����: �������� ������\n</option>
		<option value='14' $sel14>��������: ����������\n</option>
		<option value='15' $sel15>�����: ������ �������\n</option>
		<option value='16' $sel16>��������: ����� �������\n</option>
		<option value='17' $sel17>��������: �� �������� �������, ������������ ������\n</option>


		</select>";
		//���������� ������:
		//<option value='5' $sel5>������������� ����� �������� �� �������\n</option>
				
}
function kto_obrab_view ($obrab, $rul)
{	
    if ($rul==3)
	{
		switch ($obrab)
		{
			case 0:
				$sel0='selected';			
				break;
			case 1:
				$sel1='selected';
				break;
			case 2:
				$sel2='selected';			
				break;
		}
		echo "
		<select name='zay_kto_obrabat'>\n
		<option value='0' $sel0>����� �� ������������\n
		<option value='1' $sel1>������������ �����\n
		<option value='2' $sel2>������������ �����\n			
		</select>";
	}
	elseif ($rul==2)
	{
		switch ($obrab)
		{
			case 0:
				$sel='����� �� ������������';			
				break;
			case 1:
				$sel='������������ �����';
				break;
			case 2:
				$sel='������������ �����';			
				break;
		}
		echo "$sel";	
	}
}
function zay_status_commerc ($status, $rul)
{	
    if ($rul==3)
	{
		switch ($status)
		{
			case 0:
				$sel0='selected';			
				break;
			case 1:
				$sel1='selected';
				break;
			case 2:
				$sel2='selected';			
				break;
		}
		echo "
		<select name='zay_status_commerc'>\n
		<option value='0' $sel0>��� ������������� �����������\n</option>
		<option value='1' $sel1>���� ������������ �����������\n</option>
		<option value='2' $sel2>��������������� ������������ �����������\n</option>			
		</select>";
	}
	elseif ($rul==1)
	{
		switch ($status)
		{
			case 0:
				$sel='��� ������������� �����������';			
				break;
			case 1:
				$sel='���� ������������ �����������';
				break;
			case 2:
				$sel='��������������� ������������ �����������';			
				break;
		}
		echo "$sel";	
	}
}


function obrabotchik_check ($id_otrab, $id)
{	
	if ($id=='') $sel0='selected';
	if ($id!='') $sel1='selected';			
	echo "<select name='obrabotchik_check[]'>\n
	  <option value='0' $sel0>�� ������\n</option>
	  <option value='".$id_otrab."' $sel1>������\n</option>			
	 </select> ";
}
function instrukt_type ($id)
{	
	if ($id=='0') $sel0='selected';
	if ($id=='1') $sel1='selected';			
	echo "<select name='instrukt_type[]'>\n
	  <option value='0' $sel0>��������������\n</option>
	  <option value='1' $sel1>�����\n</option>
	 </select>";
}
function otrabotka_status ($status)
{	
	switch ($status)
	{
		case 0:
			$sel0='selected';			
			break;
		case 1:
			$sel1='selected';
			break;
		case 2:
			$sel2='selected';			
			break;
		case 3:
			$sel3='selected';
			break;
		case 4:
			$sel4='selected';			
			break;
		case 5:
			$sel5='selected';			
			break;
	}		
	echo "<select name='otrabotka_status[]'>\n
	  <option value='0' $sel0>�� ������� � ���������\n</option>
	  <option value='1' $sel1>������� � ��������, �������� �� �����\n</option>
	  <option value='2' $sel2>�������, �������������� ������\n</option>
	  <option value='3' $sel3>�������, ���� ������������� ����������\n</option>
	  <option value='4' $sel4>�������, ����. ����������, ����� � ���������\n</option>
	  <option value='5' $sel5>������ ����������\n</option>
	</select>";
}					   
function ekr_sql($value)
{
  if (is_array($value)==true) 
    for($i=0;$i<count($value);$i++)
      $rez[$i]=addslashes($value[$i]);
  else $rez=addslashes($value);
  
  return $rez;
}
?>