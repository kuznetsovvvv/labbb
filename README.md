# labbb
**Part1**

   1) Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).

   2) Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
```bash
Команда: echo "# labbb" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:kuznetsovvvv/labbb.git
git push -u origin main

Вывод:подсказка: Using 'master' as the name for the initial branch. This default branch name
подсказка: is subject to change. To configure the initial branch name to use in all
подсказка: of your new repositories, which will suppress this warning, call:
подсказка: 
подсказка: 	git config --global init.defaultBranch <name>
подсказка: 
подсказка: Names commonly chosen instead of 'master' are 'main', 'trunk' and
подсказка: 'development'. The just-created branch can be renamed via this command:
подсказка: 
подсказка: 	git branch -m <name>
Инициализирован пустой репозиторий Git в /home/misha/other/labbb/.git/
[master (корневой коммит) a8eff7e] first commit
 1 file changed, 1 insertion(+)
 create mode 100644 README.md
Перечисление объектов: 3, готово.
Подсчет объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 216 байтов | 72.00 КиБ/с, готово.
Всего 3 (изменений 0), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
To github.com:kuznetsovvvv/labbb.git
 * [new branch]      main -> main
Ветка «main» отслеживает внешнюю ветку «main» из «origin».
```
   
   
   3) Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2).
    Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.
```bash
Команда:touch hello_world.cpp

Код:#include<iostream>
using namespace std;
int main(){

cout<<"hello world!"<<endl;

    return 0;
}

```
    
   4) Добавьте этот файл в локальную копию репозитория.
```bash
Команда:git add hello_world.cpp

```
   
   5) Закоммитьте изменения с осмысленным сообщением.
```bash
Команда:git commit -m "Added initial version of hello_world.cpp with bad coding style."

Вывод:[main 6ea8384] Added initial version of hello_world.cpp with bad coding style.
 1 file changed, 12 insertions(+)
 create mode 100644 hello_world.cpp
```
   
   6) Изменитьте исходный код так, чтобы программа через
    стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.
```bash
Код:#include<iostream>
#include<string>
using namespace std;
int main(){
string name;
cin>>name;
cout<<"hello world from"<<name<<endl;
return 0;
}
```
    
   7) Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?
   
   Почему не нужно добавлять файл повторно `git add` перед коммитом изменений? Потому что при использовании опции `-a` ("--all") в команде `git commit`, Git автоматически добавляет все измененные файлы в коммит, поэтому повторное явное добавление файлов не требуется. 
   
```bash
Команда: git commit -a -m "by name"


Вывод:[main 14526bd] by name
 2 files changed, 103 insertions(+), 3 deletions(-)
```
  
   8) Запуште изменения в удалёный репозиторий.
```bash
Команда: git push origin master

Вывод:Перечисление объектов: 9, готово.
Подсчет объектов: 100% (9/9), готово.
При сжатии изменений используется до 6 потоков
Сжатие объектов: 100% (7/7), готово.
Запись объектов: 100% (7/7), 2.12 КиБ | 2.13 МиБ/с, готово.
Всего 7 (изменений 0), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
To github.com:kuznetsovvvv/labbb.git
   a8eff7e..14526bd  main -> main
```
   
   9) Проверьте, что история коммитов доступна в удалёный репозитории.
   

**Part2**

  1)  В локальной копии репозитория создайте локальную ветку patch1.
```bash
Команда: git checkout -b patch1
Вывод:Переключились на новую ветку «patch1»
```
  
   2) Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;
```bash
Код: #include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
```
   
   3) commit, push локальную ветку в удалённый репозиторий.
```bash
Команда:git add hello_world.cpp
Команда:git commit -m "Removed using namespace std;"
Вывод:[patch1 49316c5] Removed using namespace std;
 1 file changed, 9 insertions(+), 9 deletions(-)
 
Команда:git push origin patch1
Вывод:Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 6 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 425 байтов | 425.00 КиБ/с, готово.
Всего 3 (изменений 0), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/kuznetsovvvv/labbb/pull/new/patch1
remote: 
To github.com:kuznetsovvvv/labbb.git
 * [new branch]      patch1 -> patch1
```
   
   4) Проверьте, что ветка patch1 доступна в удалёный репозитории.
   
   5) Создайте pull-request patch1 -> master.
Создаем pull-request по ссылке из пункта 3:
```bash
https://github.com/kuznetsovvvv/labbb/pull/new/patch1
```
   
   6) В локальной копии в ветке patch1 добавьте в исходный код комментарии.
```bash
Код: #include <iostream>
#include <string>//libraries
int main() {
//enter name
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
std::cout << "Hello world from " << name << std::endl;
return 0;
}

```
   
   7) commit, push.
```bash
Команда: git commit -a -m "Added comments to the code"
Вывод:[patch1 ecb2d9c] Added comments to the code
 2 files changed, 231 insertions(+), 35 deletions(-)
 
 Команда:git push origin patch1
 Вывод:Перечисление объектов: 7, готово.
Подсчет объектов: 100% (7/7), готово.
При сжатии изменений используется до 6 потоков
Сжатие объектов: 100% (4/4), готово.
Запись объектов: 100% (4/4), 3.23 КиБ | 1.61 МиБ/с, готово.
Всего 4 (изменений 1), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To github.com:kuznetsovvvv/labbb.git
   49316c5..ecb2d9c  patch1 -> patch1
```
   
   8) Проверьте, что новые изменения есть в созданном на шаге 5 pull-request
Через графический интерфейс проверяем на гитхабе
   
   9) В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.
```bash
Команда: git push origin --delete patch1
Вывод:To github.com:kuznetsovvvv/labbb.git
 - [deleted]         patch1

```
   
   10) Локально выполните pull.
```bash
Команда: git checkout main
Вывод:Переключились на ветку «main»
Эта ветка соответствует «origin/main».

Команда:git pull origin main
Вывод:remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0
Распаковка объектов: 100% (1/1), 933 байта | 933.00 КиБ/с, готово.
Из github.com:kuznetsovvvv/labbb
 * branch            main       -> FETCH_HEAD
   14526bd..1b9c832  main       -> origin/main
Обновление 14526bd..1b9c832
Fast-forward
 README.md       | 257 ++++++++++++++++++++++++++++++++++++++++++++++++-------
 hello_world.cpp |  19 ++--
 2 files changed, 236 insertions(+), 40 deletions(-)
```
   
   11) С помощью команды git log просмотрите историю в локальной версии ветки master.
```bash
Команда: git log

Вывод:commit 1b9c8328f345b595c3601f3520267cc9783060e1 (HEAD -> main, origin/main)
Merge: 14526bd ecb2d9c
Author: Михаил <145388712+kuznetsovvvv@users.noreply.github.com>
Date:   Mon Mar 25 18:33:20 2024 +0200

    Merge pull request #1 from kuznetsovvvv/patch1
    
    Removed using namespace std;

commit ecb2d9cbbcabbe9b402db1882b57d5e5796d098e (patch1)
Author: misha <mihail_160505@mail.ru>
Date:   Mon Mar 25 19:24:30 2024 +0300

    Added comments to the code

commit 49316c5923b3fcaeb9102e1dc89b39c873040775
Author: misha <mihail_160505@mail.ru>
Date:   Mon Mar 25 19:16:47 2024 +0300

    Removed using namespace std;

commit 14526bd00b440ccd65c4ffe2929166ba2682670b
Author: misha <mihail_160505@mail.ru>
Date:   Mon Mar 25 19:04:06 2024 +0300

    by name

commit 6ea83849a6112c7eed4fb19aefbd665d17fbfc93
Author: misha <mihail_160505@mail.ru>
Date:   Mon Mar 25 19:01:28 2024 +0300

    Added initial version of hello_world.cpp with bad coding style.

commit a8eff7e6b64d58f360a1bae2268cb03d106f68d3
Author: misha <mihail_160505@mail.ru>
Date:   Mon Mar 25 18:19:38 2024 +0300

    first commit
```
   
   12) Удалите локальную ветку patch1.
```bash
Команда: git branch -d patch1

Вывод:Ветка patch1 удалена (была ecb2d9c).
```


**Part3**

   1)Создайте новую локальную ветку patch2.
```bash
Команда: git checkout -b patch2

Вывод:Переключились на новую ветку «patch2»
```
    
   2) Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.
```bash
Команда: clang-format -style=Mozilla -i hello_world.cpp

```
   
   3) commit, push, создайте pull-request patch2 -> master.
```bash
Команда: git add hello_world.cpp

Команда:git commit -a "Updated code style using clang-format"
Вывод:[patch2 ebad822] Updated code style using clang-format
 1 file changed, 10 insertions(+), 10 deletions(-)
 
 Команда:git push origin patch2
Вывод:Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 6 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 440 байтов | 8.00 КиБ/с, готово.
Всего 3 (изменений 0), повторно использовано 0 (изменений 0), повторно использовано пакетов 0
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/kuznetsovvvv/labbb/pull/new/patch2
remote: 
To github.com:kuznetsovvvv/labbb.git
 * [new branch]      patch2 -> patch2

```
По ссылке  https://github.com/kuznetsovvvv/labbb/pull/new/patch2 создаем пулл-реквест 

   
   4) В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
Оставляем комментарии в удаленном репозитории в пулл-реквесте 

Меняем комментарии на русский язык в удаленном репозитории
```bash
Код:#include <iostream>
#include <string>//libraries
int main() {
//введите имя
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
std::cout << "Hello world from " << name << std::endl;
return 0;
}

```


   5) Убедитесь, что в pull-request появились конфликтны.
   В пулл-реквесте написано:
This branch has conflicts that must be resolved
   
   6) Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
```bash
Команда: git checkout main
Вывод:Переключились на ветку «main»
Эта ветка соответствует «origin/main».

Команда: git pull origin main
Вывод:remote: Enumerating objects: 5, done.
remote: Counting objects: 100% (5/5), done.
remote: Compressing objects: 100% (3/3), done.
remote: Total 3 (delta 1), reused 0 (delta 0), pack-reused 0
Распаковка объектов: 100% (3/3), 1016 байтов | 63.00 КиБ/с, готово.
Из github.com:kuznetsovvvv/labbb
 * branch            main       -> FETCH_HEAD
   1b9c832..42518aa  main       -> origin/main
Обновление 1b9c832..42518aa
Fast-forward
 hello_world.cpp | 2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)

Команда:git checkout patch2
Вывод:Переключились на ветку «patch2»

Команда:git rebase main
Вывод:error: не удалось выполнить rebase: У вас есть непроиндексированные изменения.
error: Сделайте коммит или спрячьте их.

```
Разрешаем конфликт в Visual studio Code

   
   7) Сделайте force push в ветку patch2
```bash
Команда: 


Вывод:
```
   
   8) Убедитель, что в pull-request пропали конфликтны.
```bash
Команда: 


Вывод:
```
   
   9) Вмержите pull-request patch2 -> master.
```bash
Команда: 


Вывод:
```

