#include<bits/stdc++.h>
const int Q = 1e6;
void cycle(int &a, int &b, int &c, int &d) {
	int t = a; a = b; b = c; c = d; d = t;
}
struct Cube {
	int U[3][3], L[3][3], F[3][3], R[3][3], D[3][3], B[3][3];
	void read() {
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%d", &U[i][j]);
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%d", &L[i][j]);
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%d", &F[i][j]);
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%d", &R[i][j]);
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%d", &D[i][j]);
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%d", &B[i][j]);
	}
	void print() {
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) fprintf(stderr, "%d%c", U[i][j], " \n"[j == 2]);
		fprintf(stderr, "\n");
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) fprintf(stderr, "%d%c", L[i][j], " \n"[j == 2]);
		fprintf(stderr, "\n");
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) fprintf(stderr, "%d%c", F[i][j], " \n"[j == 2]);
		fprintf(stderr, "\n");
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) fprintf(stderr, "%d%c", R[i][j], " \n"[j == 2]);
		fprintf(stderr, "\n");
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) fprintf(stderr, "%d%c", D[i][j], " \n"[j == 2]);
		fprintf(stderr, "\n");
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) fprintf(stderr, "%d%c", B[i][j], " \n"[j == 2]);
		fprintf(stderr, "\n");
		fprintf(stderr, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n");
		fprintf(stderr, "\n");
	}
	void _R(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(F[i][2], D[i][2], B[i][2], U[i][2]);
		cycle(R[0][0], R[2][0], R[2][2], R[0][2]);
		cycle(R[1][0], R[2][1], R[1][2], R[0][1]);
		if (print) printf("R\n");
	}
	void _r(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(F[i][2], U[i][2], B[i][2], D[i][2]);
		cycle(R[0][0], R[0][2], R[2][2], R[2][0]);
		cycle(R[1][0], R[0][1], R[1][2], R[2][1]);
		if (print) printf("r\n");
	}
	void _L(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(F[i][0], U[i][0], B[i][0], D[i][0]);
		cycle(L[0][0], L[2][0], L[2][2], L[0][2]);
		cycle(L[1][0], L[2][1], L[1][2], L[0][1]);
		if (print) printf("L\n");
	}
	void _l(bool print = 1) {
		for (int i = 0; i < 3; i++)	
			cycle(F[i][0], D[i][0], B[i][0], U[i][0]);
		cycle(L[0][0], L[0][2], L[2][2], L[2][0]);
		cycle(L[1][0], L[0][1], L[1][2], L[2][1]);
		if (print) printf("l\n");
	}
	void _B(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(U[0][i], R[i][2], D[2][2 - i], L[2 - i][0]);
		cycle(B[0][0], B[2][0], B[2][2], B[0][2]);
		cycle(B[1][0], B[2][1], B[1][2], B[0][1]);
		if (print) printf("B\n");
	}
	void _b(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(U[0][i], L[2 - i][0], D[2][2 - i], R[i][2]);
		cycle(B[0][0], B[0][2], B[2][2], B[2][0]);
		cycle(B[1][0], B[0][1], B[1][2], B[2][1]);
		if (print) printf("b\n");
	}
	void _D(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(F[2][i], L[2][i], B[0][2 - i], R[2][i]);
		cycle(D[0][0], D[2][0], D[2][2], D[0][2]);
		cycle(D[1][0], D[2][1], D[1][2], D[0][1]);
		if (print) printf("D\n");
	}
	void _d(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(F[2][i], R[2][i], B[0][2 - i], L[2][i]);
		cycle(D[0][0], D[0][2], D[2][2], D[2][0]);
		cycle(D[1][0], D[0][1], D[1][2], D[2][1]);
		if (print) printf("d\n");
	}
	void _F(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(U[2][i], L[2 - i][2], D[0][2 - i], R[i][0]);
		cycle(F[0][0], F[2][0], F[2][2], F[0][2]);
		cycle(F[1][0], F[2][1], F[1][2], F[0][1]);
		if (print) printf("F\n");
	}
	void _f(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(U[2][i], R[i][0], D[0][2 - i], L[2 - i][2]);
		cycle(F[0][0], F[0][2], F[2][2], F[2][0]);
		cycle(F[1][0], F[0][1], F[1][2], F[2][1]);
		if (print) printf("f\n");
	}
	void _U(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(F[0][i], R[0][i], B[2][2 - i], L[0][i]);
		cycle(U[0][0], U[2][0], U[2][2], U[0][2]);
		cycle(U[1][0], U[2][1], U[1][2], U[0][1]);
		if (print) printf("U\n");
	}
	void _u(bool print = 1) {
		for (int i = 0; i < 3; i++)
			cycle(F[0][i], L[0][i], B[2][2 - i], R[0][i]);
		cycle(U[0][0], U[0][2], U[2][2], U[2][0]);
		cycle(U[1][0], U[0][1], U[1][2], U[2][1]);
		if (print) printf("u\n");
	}
	void face_u(bool print = 1) {
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				cycle(F[i][j], U[i][j], B[i][j], D[i][j]);
		cycle(L[0][0], L[2][0], L[2][2], L[0][2]);
		cycle(L[1][0], L[2][1], L[1][2], L[0][1]);
		cycle(R[0][0], R[0][2], R[2][2], R[2][0]);
		cycle(R[1][0], R[0][1], R[1][2], R[2][1]);
		if (print) printf("face_u\n");
	}
	void face_d(bool print = 1) {
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				cycle(F[i][j], D[i][j], B[i][j], U[i][j]);
		cycle(L[0][0], L[0][2], L[2][2], L[2][0]);
		cycle(L[1][0], L[0][1], L[1][2], L[2][1]);
		cycle(R[0][0], R[2][0], R[2][2], R[0][2]);
		cycle(R[1][0], R[2][1], R[1][2], R[0][1]);
		if (print) printf("face_d\n");
	}
	void face_l(bool print = 1) {
		for (int i = 0; i < 3; i++)	
			for (int j = 0; j < 3; j++)
				cycle(F[i][j], L[i][j], B[2 - i][2 - j], R[i][j]);
		cycle(U[0][0], U[0][2], U[2][2], U[2][0]);
		cycle(U[1][0], U[0][1], U[1][2], U[2][1]);
		cycle(D[0][0], D[2][0], D[2][2], D[0][2]);
		cycle(D[1][0], D[2][1], D[1][2], D[0][1]);
		if (print) printf("face_l\n");
	}
	void face_r(bool print = 1) {
		for (int i = 0; i < 3; i++)	
			for (int j = 0; j < 3; j++)
				cycle(F[i][j], R[i][j], B[2 - i][2 - j], L[i][j]);
		cycle(U[0][0], U[2][0], U[2][2], U[0][2]);
		cycle(U[1][0], U[2][1], U[1][2], U[0][1]);
		cycle(D[0][0], D[0][2], D[2][2], D[2][0]);
		cycle(D[1][0], D[0][1], D[1][2], D[2][1]);
		if (print) printf("face_r\n");
	}
	void anticlockwise(bool print = 1) {
		face_d(print);
		face_l(print);
		face_u(print);
	}
	void clockwise(bool print = 1) {
		face_d(print);
		face_r(print);
		face_u(print);
	}
};
Cube now;
Cube opt(Cube x, int op, bool print) {
	switch (op) {
		case 0 : x._R(print); break;
		case 1 : x._r(print); break;
		case 2 : x._L(print); break;
		case 3 : x._l(print); break;
		case 4 : x._B(print); break;
		case 5 : x._b(print); break;
		case 6 : x._D(print); break;
		case 7 : x._d(print); break;
		case 8 : x._F(print); break;
		case 9 : x._f(print); break;
		case 10 : x._U(print); break;
		case 11 : x._u(print); break;
	}
	return x;
}
void opt(int op) {
	switch (op) {
		case 0 : now._R(); break;
		case 1 : now._r(); break;
		case 2 : now._L(); break;
		case 3 : now._l(); break;
		case 4 : now._B(); break;
		case 5 : now._b(); break;
		case 6 : now._D(); break;
		case 7 : now._d(); break;
		case 8 : now._F(); break;
		case 9 : now._f(); break;
		case 10 : now._U(); break;
		case 11 : now._u(); break;
	}
}
Cube q[Q];
int head, tail, op[Q], pre[Q], stk[Q];
bool solved;
int count_bottom_edge(Cube now, bool Debug = 0){
	bool no_blue = 1;
	for (int i = 0; no_blue && i < 4; i++) {
		if (now.F[0][1] == 1 && now.U[2][1] == 2) no_blue = 0;
		now.anticlockwise(0);
	}
	if (no_blue) return 0;
	int ret = 0;
	while (now.F[0][1] != 1 || now.U[2][1] != 2) now.anticlockwise(0);
	//if (Debug) fprintf(stderr, "233333333\n"), now.print();
	for (int i = 0; i < 4; i++) {
		if (now.F[0][1] == 1 && now.U[2][1] == 2 + i) ret += (1 << i);
		//if (Debug && now.F[0][0] == 1 && now.U[2][2] == 2 + i) fprintf(stderr, "%d\n", i);
		now.anticlockwise(0);
	}
	return ret;
};
void bottom_cross() {
	if (now.B[1][1] == 1) now.face_u();
	if (now.U[1][1] == 1) now.face_u();
	if (now.L[1][1] == 1) now.face_l();
	if (now.R[1][1] == 1) now.face_r();
	if (now.D[1][1] == 1) now.face_d();
	//now.print();
	int finished;
	while ((finished = count_bottom_edge(now)) < 15) {
		head = tail = 1;
		q[head] = now;
		solved = 0;
		for (; !solved; head++)
			for (int i = 0; !solved && i < 12; i++) {
				q[0] = opt(q[head], i, 0);
				int new_count = count_bottom_edge(q[0]);
				if ((new_count & finished) != finished) continue;
				q[++tail] = q[0];
				op[tail] = i;
				pre[tail] = head;
				if (new_count > finished) {
					for (int j = tail; j > 1; j = pre[j])
						stk[++stk[0]] = op[j];
					while (stk[0]) opt(stk[stk[0]--]);
					solved = 1;
				}
			}
		//now.print(); fprintf(stderr, "%d\n", count_bottom_edge(now, 1));
	}
}
void down_all() {
	while (now.U[2][1] != now.U[1][1]) now._F();
	now.face_u();
	int finished = 0;
	for (int i = 0; i < 4; i++) {
		if (now.F[2][2] == now.F[1][1] && now.R[2][0] == now.R[1][1] && now.D[0][2] == now.D[1][1]) ++finished;
		now.face_r();
	}
	//now.print();
	while (finished < 4) {
		bool did = 0;
		for (int i = 0; i < 3; i++)
			if (now.F[0][2] == 1 || now.R[0][0] == 1 || now.U[2][2] == 1) {
				while (now.F[0][2] * now.R[0][0] * now.U[2][2] != now.F[1][1] * now.R[1][1])
					now._u(), now.face_r();
				if (now.F[0][2] == 1)
					now._f(), now._u(), now._F();
				else {
					if (now.U[2][2] == 1) now._R(), now._U(), now._U(), now._r(), now._u();
					if (now.R[0][0] == 1) now._R(), now._U(), now._r();
				}
				finished += did = 1;
				break;
			}
		if (did) continue;
		for (int i = 0; i < 3; i++) {
			if ((now.F[2][2] == 1 || now.R[2][0] == 1 || now.D[0][2] == 1) 
				&& (now.F[2][2] != now.F[1][1] || now.R[2][0] != now.R[1][1] || now.D[0][2] != now.D[1][1]))
					{now._R(), now._U(), now._r(); break;}
			now.face_r();
		}
	}
}
void mid_all() {
	int finished = 0;
	for (int i = 0; i < 4; i++) {
		if (now.F[1][2] == now.F[1][1] && now.R[1][0] == now.R[1][1]) ++finished;
		now.face_r();
	}
	//now.print(); fprintf(stderr, "finished = %d\n", finished);
	while (finished < 4) {
		bool did = 0;
		for (int i = 0; i < 3; i++)
			if (now.F[0][1] != 6 && now.U[2][1] != 6) {
				while (now.F[0][1] * now.U[2][1] != now.F[1][1] * now.R[1][1])
					now._u(), now.face_r();
				if (now.F[0][1] == now.F[1][1]) {
					now._U(), now._R(), now._u(), now._r();
					now._u(), now._f(), now._U(), now._F();
					finished += did = 1;
					//now.print(); fprintf(stderr, "finished = %d\n", finished);
					break;
				}
				now._u();
				now._u(), now._f(), now._U(), now._F();
				now._U(), now._R(), now._u(), now._r();
				finished += did = 1;
				//now.print(); fprintf(stderr, "finished = %d\n", finished);
				break;
			}
		if (did) continue;
		for (int i = 0; i < 3; i++) {
			if (now.F[1][2] != now.F[1][1] || now.R[1][0] != now.R[1][1]) {
				now._U(), now._R(), now._u(), now._r();
				now._u(), now._f(), now._U(), now._F();
				if (now.F[1][2] == now.F[1][1] && now.R[1][0] == now.R[1][1]) ++finished;
				break;
			}
			now.face_r();
		}
	}
}
void top_cross() {
	if (now.U[0][1] == 6 && now.U[1][0] == 6 && now.U[1][2] == 6 && now.U[2][1] == 6) return;
	if (now.U[0][1] != 6 && now.U[1][0] != 6 && now.U[1][2] != 6 && now.U[2][1] != 6)
		now._F(), now._R(), now._U(), now._r(), now._u(), now._f();
	while (now.U[0][1] != 6) now.face_r();
	if (now.U[0][1] == 6 && now.U[1][2] == 6) now.face_l();
	if (now.U[0][1] == 6 && now.U[1][0] == 6)
		now._F(), now._R(), now._U(), now._r(), now._u(), now._f();
	while (now.U[1][0] != 6) now.face_r();
	now._F(), now._R(), now._U(), now._r(), now._u(), now._f();
}
int count_top() {
	int ret = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			ret += now.U[i][j] == 6;
	return ret;
}
void fish1() {
	now._r(), now._u(), now._R(), now._u(),
	now._r(), now._u(), now._u(), now._R();
}
void fish2() {
	now._F(), now._U(), now._f(), now._U(),
	now._F(), now._U(), now._U(), now._f();
}
void top_all() {
	if (count_top() == 9) return;
	if (count_top() == 5) {
		while (now.L[0][0] != 6) now.face_r();
		fish1();
	}
	if (count_top() == 7) {
		while (now.B[2][0] != 6) now.face_r();
		fish1();
	}
	while (now.U[0][0] != 6) now.face_r();
	if (now.F[0][0] == 6)
		fish1();
	else
		fish2();
}
int count_side_same() {
	int ret = 0;
	for (int i = 0; i < 4; i++) {
		ret += now.F[0][0] == now.F[0][2];
		now.face_r();
	}
	return ret;
}
void up_angle_formula() {
	now._R(), now._b(), now._R(), now._F(),
	now._F(), now._r(), now._B(), now._R(),
	now._F(), now._F(), now._R(), now._R();
}
void up_angle() {
	if (!count_side_same()) up_angle_formula();
	if (count_side_same() == 4) return;
	while (now.F[0][0] != now.F[0][2]) now.face_r();
	up_angle_formula();
}
int count_edge_same() {
	int ret = 0;
	for (int i = 0; i < 4; i++) {
		ret += now.F[0][0] == now.F[0][1];
		now.face_r();
	}
	return ret;
}
void up_edge_formula() {
	now._R(), now._u(), now._R(), now._U(),
	now._R(), now._U(), now._R(), now._u(),
	now._r(), now._u(), now._R(), now._R();
}
void up_edge() {
	while (!count_edge_same()) up_edge_formula();
	while (now.B[2][1] != now.B[2][0]) now.face_r();
	while (count_edge_same() < 4) up_edge_formula();
	while (now.F[0][1] != now.F[1][1]) now._U();
}
int main() {
	freopen("cube.in", "r", stdin);
	freopen("cube.out", "w", stdout);
	now.read();
	bottom_cross();// fprintf(stderr, "bottom_cross finished\n"); now.print();// printf("!\n"); return 0;
	down_all();// fprintf(stderr, "down_all\n");// now.print();
	mid_all();// fprintf(stderr, "mid_all\n");// now.print();
	top_cross();// fprintf(stderr, "top_cross\n");// now.print();
	top_all();// fprintf(stderr, "top_all\n");// now.print();
	up_angle();// fprintf(stderr, "up_angle\n");// now.print();
	up_edge();
	printf("!\n");
	return 0;
}
