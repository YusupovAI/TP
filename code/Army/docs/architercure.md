# Архитектура
Есть класс `Player`, в котором хранятся все юниты игрока. У всех юнитов есть какой-то
общий интерфейс, поэтому логично создать абстрактный класс `Unit`. Все юниты наследуются от него.
## AbstractFactory при создании армии
В начале матча игрок выбирает расу, юнитов только этой расы он може создавать в дальнейшем.
У каждой расы есть юниты 3 типов, у которых могут быть различные методы. Поэтому полезно
создать классы `Infantry`, `Horseman` и `Mage` реализующие интерфейс `Unit`.\
Юниты у людей и у орков хоть и имеют одинаковые методы, но имеют разные характеристики, поэтому полезно использовать абстрактную фабрику.\
Создадим интерфейс фабрики юнитов `WarriorFactory` и две его реализации:
`HumanFactory` и `OrcFactory`.\
В начале игры будем передавать игроку нужную фабрику, которую в дальнейшем он сам будет использовать.
## Класс Hero
У игрока есть герой, у которого помимо стандартных методов и полей `Unit` есть много дополнительных возможностей,
поэтому стоит создать класс `Hero`. В начале матча можно создать своего героя, настроив у него различные параметры, а можно
выбрать готовый шаблон.
## Builder при создании героя
Большинство параметров пользователь может даже не использовать, поэтому можно использовать паттерн `Builder`.\
Так как эффективность различных способностей и оружия у разных рас различна, то удобно создать разных
строителей для людей и орков.\
Класс `HeroDirector` будет реализовывать стандартные сценарии для `WiseHero` и `MightyHero`.