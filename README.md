# arduinolabs-lyceum
<<<<<<< HEAD
Arduino labs for lyceum students
git add .
git commit -m "������ ������� ��������� �����"
git push
=======
Arduino labs for NSTU lyceum students

Использование Git
=====



Установка для Windows
-----

1. По ссылке http://git-scm.com/downloads скачать последний релиз - нажать на кнопку Download for Windows/

2. Запустить скачанный exe-файл.

3. В окне **Welcome to the Git Setup Wizard** кликнуть **Next**

4. В окне **Information** кликнуть **Next**

5. В окне **Select components** убрать галку в пункте *Windows Explorer intergation* и кликнуть **Next**

6. В окне **Adjusting you PATH environment** оставить радиочек на первом пункте и кликнуть **Next**

7. В окне **Configuring the line endings conversions** оставить радиочек на первом пункте и кликнуть **Next**

8. Дождаться окончания установки

9. В окне **Compliting the Git Setup Wizard** убрать галку с *View ReleaseNotes.rtf* и кликнуть **Finish**



Запуск оболочки git
-----

Найдите в Пуске приложение Git Bash и запустите его. Откроется консоль с приглашением к вводу.



Клонирование репозитория с сервера на ПК
-----

Перейдите на диск C: командой

    cd c:

Если у вас нет папки `devel`, создайте её:

    mkdir devel

Перейдите в папку `devel`:

    cd devel

Склонируйте репозиторий с сервера себе на ПК:

    git clone http://github.com/%ВАШ_НИК%/arduinolabs-lyceum

Перейдите в папку `arduinolabs-lyceum`:

    cd arduinolabs-lyceum

Настройте оригинальный репозиторий, с которого вы сделали форк, как *удаленный репозиторий (remote)*:

    git remote add main http://github.com/dubkov/arduinolabs-lyceum master

Получите последние изменения из оригинального репозитория:

    git pull main

Настройте свое имя пользователя:

    git config user.name "%ВАШ_НИК%"

кавычки при этом должны остаться.

Настройте свой e-mail:

    git config user.email "%ВАШ_EMAIL%"

Загрузка изменений на сервер
-----

После внесения в файлы изменений, которые вы бы хотели сохранить, следует делать из них коммит.

Сначала добавьте все изменение в `staging`:

    git add .


Теперь создайте коммит:

    git commit -m "кратко опишите изменения здесь"

Наконец, можно загружать изменения на сервер, чтобы они были видны всем:

    git push

У вас спросят сначала ваш ник на сайте github.com, а потом пароль. При вводе пароля никакие символы не отображаются.

> По сути, вы создаете контрольную точку, которую сможете просмотреть в любой момент. Это слепок состояния вашего проекта. Вы всегда можете вернуться к любой версии вашего проекта и посмотреть, как был реализован тот или иной его кусок.
>>>>>>> 652668d50a74b0da43815cc3e4b35a20b8b80742
