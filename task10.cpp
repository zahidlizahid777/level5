// 10. N ?d?d daxil edil?r?k ?n böyük, ?n kiçik v? ortaný tapmaq
void task10() {
int n, x, max, min;
double sum = 0;

cout << "Nece eded daxil edilecek? ";  
cin >> n;  

cout << "Eded daxil edin: ";  
cin >> x;  

max = min = x;  
sum = x;  

for (int i = 1; i < n; i++) {  
    cin >> x;  
    if (x > max) max = x;  
    if (x < min) min = x;  
    sum += x;  
}  

cout << "Max: " << max << "  Min: " << min << "  Orta: " << sum / n << endl;

}
