# Практическая работа #2
---
### Вариант 7. Количество отрицательных чисел.

На вход подаётся число n∈N:n≤2147483647, а также n чисел xi∈Z:|xi|≤2147483647для любого целого i от 1 до n. Вывести количество чисел xi:xi<0.

###  Вариант 18. Сумма последовательности 2.
На вход подаётся чис-ло n∈N:n≤2147483647, а также n чисел xi∈Z:|xi| ≤2147483647для любого целого i от 1 доn. Вывести значение ∑︁xi−i

### Ход работы
---
1. Был написан код для каждого задания.
2. Программы были скомпилированы и запущены для проверки:
```sh
$ gcc 07_kolichestvo_otritsatelnih_chisel.c -o 07_kolichestvo_otritsatelnih_chisel.o
$ ./07_kolichestvo_otritsatelnih_chisel.o
$ gcc 18_summa_posledovatelnosty_2.c -o 18_summa_posledovatelnosty_2.c
$ ./18_summa_posledovatelnosty_2.o
```
3. Были загружены файлы на удаленный репозиторий:
```sh
$ git checkout -b pr2
$ git add .
$ git commit -m "Added files from pr2"
$ git push -u origin pr2
```
### Результаты
---
##### Количество отрицательныч чисел. На вход поступило 3 числа. Ответ: 2.
![2](https://user-images.githubusercontent.com/47860161/53673113-445b6480-3cb8-11e9-8bf8-31fda9539fb7.png)

 
##### Сумма последовательности 2. На вход поступило 5 чисел. Ответ 5.
![1](https://user-images.githubusercontent.com/47860161/53673079-1d049780-3cb8-11e9-8354-e5fe4e02b8aa.png)
 
 ### Таблица
 
| Resource | Link |
| ------ | ------ |
| Github | https://github.com/melnichenkodmitry/timp |
| Documentation | https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet |
