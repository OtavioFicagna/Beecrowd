n = float(input())
q100 = n // 100
n = n - q100*100
q50 = n // 50
n = n - q50*50
q20 = n // 20
n = n - q20*20
q10 = n // 10
n = n - q10*10
q5 = n // 5
n = n - q5*5
q2 = n // 2
n = n - q2*2

m100 = n // 1
n = n - m100*1
n=float('%.2f'% n)
m50 = n // 0.5
n = n - m50*0.5
n=float('%.2f'% n)
m25 = n // 0.25
n = n - m25*0.25
n=float('%.2f'% n)
m10 = n // 0.10
n = n - m10*0.10
n=float('%.2f'% n)
m5 = n // 0.05
n = n - m5*0.05
n=float('%.2f'% n)
m1 = n * 100
m1=float('%.2f'% m1)
n=float('%.2f'% n)

print(f'''NOTAS:
{int(q100)} nota(s) de R$ 100.00
{int(q50)} nota(s) de R$ 50.00
{int(q20)} nota(s) de R$ 20.00
{int(q10)} nota(s) de R$ 10.00
{int(q5)} nota(s) de R$ 5.00
{int(q2)} nota(s) de R$ 2.00
MOEDAS:
{int(m100)} moeda(s) de R$ 1.00
{int(m50)} moeda(s) de R$ 0.50
{int(m25)} moeda(s) de R$ 0.25
{int(m10)} moeda(s) de R$ 0.10
{int(m5)} moeda(s) de R$ 0.05
{int(m1)} moeda(s) de R$ 0.01''')
