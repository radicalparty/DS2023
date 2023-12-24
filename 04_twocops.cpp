#include <bits/stdc++.h>
#define f first
#define s second
#define pll pair<int, int>
#define dpll pair<pll, pll>
#define REP(i, a, b) for(i = a; i < b; i++)
#define RER(p) for (auto [a, b]: p)
#define RER_ref(p) for (auto& [a, b]: p)
#define output_ans cout << ans1.f << " " << ans1.s << "\n" << ans2.f << " " << ans2.s;
#define ctrl1 tmp < t && t <= tmp + lgt
#define if_1 if (ctrl1)  {swap(ans1, ans2);}
#define input_1 cin >> n; line.resize(n);
#define input_2 RER_ref(line){cin >> a.f >> a.s; line[(t + n - 1) % n].s = a; t++;}
#define set_1 RER(line) {lgt += abs(b.f - a.f) + abs(b.s - a.s); lt.emplace_back(lgt);}
#define input_3 tmp = lt[n / 2 - 1]; cin >> t; t %= lgt;
#define setting_std using namespace std;
#define it_set int lgt, n, t, tmp, l, r;
#define vec_set vector<dpll> line; vector<int> lt(1, 0);
#define pll_set pll ans1, ans2; ans1 = find_pos(t); ans2 = find_pos((tmp - t + lgt) % lgt); t <<= 1;
#define main_all input_1 input_2 set_1 input_3 pll_set if_1 output_ans
#define l_set l = 0;
#define nwhile while (t >= lt[l]) {l++;}
#define auto_set auto [a, b] = line[--l];
#define diff t -= lt[l]; r = a.s - b.s; n = a.f - b.f;
#define if_c if (r){a.s -= t * abs(r) / r;}
#define elsr else {a.f -= t * abs(n) / n;}
#define fpos_all l_set nwhile auto_set diff if_c elsr return a;
#define main_code int main(){main_all}
#define fp_code pll find_pos(int t){fpos_all}
#define code_all setting_std it_set vec_set fp_code main_code
code_all
