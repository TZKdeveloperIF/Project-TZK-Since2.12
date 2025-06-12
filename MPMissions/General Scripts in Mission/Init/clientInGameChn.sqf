// args: none
// return: bool (use this languange)

private [{_bMatch}];
_bMatch = call preprocessFile "Util\LangIsChn.sqf";

if _bMatch then {
	private [{_i}, {_capacity}];
	_i = 0; _capacity = 4;
	TzkInGameText resize _capicity;

	_f = {
		if (_i >= _capacity) then {
			_capacity = _capacity * 2;
			TzkInGameText resize _capacity;
		};
		TzkInGameText set [_i, _this];
		_i = _i + 1;
	};

	// All exist item's index and their order CAN'T BE CHANGED
	"����������ڵ��ѷ��г�
	��3�롣���ڻ��ڵ�λ����
	50�����м����ؼ���������
	AI�����޷�����Է��ƣ���
	���ڵ�����ɾ��������Զ��
	���ڻ������ƶ����ڵ�λ" call _f; // 000
	[
		 "ֱ����"
		,"��ս��"
		,"����"
		,"��ֻ"
		,"�ͻ�"
		,"ҽ�Ƴ�"
		,"ά�޿���"
		,"���ճ�"
	] call _f; // 001
	[
		 "����"
		,"�Ȼ���"
		,"�����ǹ"
		,"��ǹ��"
		,"����"
	] call _f; // 002
	[
		 "��̹��"
		,"��̹��"
		,"����"
		,"AT��ս��"
		,"AA�ؾ�"
		,"��װֱ����"
		,"�̶���"
		,"ҽ�Ʋ�ս��"
		,"���䳵"
		,"���䴬"
		,"���䲽ս��"
		,"����ɻ�"
		,"ս��"
		,"ս�����ճ�"
		,"�״ﳵ"
		,"ά�޿���"
	] call _f; // 003

	"��ɱ�����" call _f; // 004

	"Alt ������ Shift-Alt �������� RTS ���Ľ���������ϸ�ڿɲο��ʼǱ���
	\n\n
	��ʹ�����ߵ�ϵͳ���ڲ�ͬ���ؾ��а��� 0-0 �ɺ�����ͬ�����ߵ�Ƶ����
	\n
	0-0-1 ���������л� RTS ��ͼ���ģʽ��
	\n
	0-0-2 �������� TZK ���ý��档" call _f; // 005

	"���� RTS ��������" call _f; // 006
	"�ر� RTS ��������" call _f; // 007

	"��ѡ�����½���㹻���ĵ�" call _f; // 008

	"���ײ������" call _f; // 009

	// script count check. Check index with last literal value
	if (_i != 9 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;
};

_bMatch