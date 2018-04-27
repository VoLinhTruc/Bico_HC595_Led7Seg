Bico_Led7Seg()
	Chuc nang: Khoi tao cac gia tri "mac dinh" cua doi tuong Bico_Led7Seg. Cac thong so mac dinh nhu sau:
		_led_type = COMMON_ANODE;
		_num_of_digit = 8;
		_on_delay = DEFAULT_ON_DELAY; // micro giay
		_off_delay = DEFAULT_OFF_DELAY; // micro giay
	Tham so: Khong co
	Tra ve: Khong co
	Vi du: Bico_Led7Seg my_led7;
//--------------------------------------------------------
Bico_Led7Seg(uint8_t led_type, uint8_t num_of_digit, int on_delay, int off_delay)
	Chuc nang: Khoi tao cac gia tri cua doi tuong Bico_Led7Seg.
		_led_type = led_type;
		_num_of_digit = num_of_digit;
		_on_delay = on_delay; // micro giay
		_off_delay = off_delay; // micro giay
	Tham so: Khong co
	Tra ve: Khong co
	Vi du: Bico_Led7Seg my_led7(COMMON_ANODE, 4, 1000, 1);
//---------------------------------------------------------
setup()
	Chuc nang: Chon oin vi dieu khien can su dung, sau do cau hinh cho cac pin la OUTPUT
	Tham so:
		digit: Mang chua cac pin ket noi voi chan chung (COMMON pin) cua tung led
		code: amng chua cac pin ket noi voi cac chan {a, b, c, d, e, f, g, dp} cua led 7 doan
	Tra ve: Khong co
	Vi du: 
		uint8_t code[8] = {2, 3, 4, 5, 6, 7, 8, 9} // tuong ung voi a, b, c, d, e, f, g, dp
		uint8_t digit[3] = {11, 12, 13} // su dung 3 led 7 doan, tuong ung voi led vi tri thu 0, led vi tri thu 1, led vi tri thu 2
		my_led7.setup(digit, code);
//---------------------------------------------------------
setNumberAndShow(signed long val)
	Chuc nang: Dua so vao bo nho dem, sau do hien thi so tren led 7 doan
	Tham so: So can hien thi
	Tra ve: Khong co
	Vi du: my_led7.setNumberAndShow(6969);
//---------------------------------------------------------