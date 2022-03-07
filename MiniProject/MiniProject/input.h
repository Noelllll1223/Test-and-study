#pragma once
class inputin
{
private:
	int ch;

public:
	inputin(int ach) { ch = ach; }
	void inexit() {
		for (;;) {

			ch = _getch();
			if (ch == 0xE0 || ch == 0)
			{
				ch = _getch();
				switch (ch) {
				case 'Q':
					exit;
				case 'q':
					exit;

				}
			}
		}
	}

};

