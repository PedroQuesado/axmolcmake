#include "MainMenuScene.h"
#include "FairyGUI.h"
#include "axmol.h"

USING_NS_AX;
  // Certifique-se de usar o namespace correto para FairyGUI

Scene* MainMenuScene::createScene()
{
    auto scene = Scene::create();
    auto layer = MainMenuScene::create();
    scene->addChild(layer);
    return scene;
}

bool MainMenuScene::init()
{
    if (!Scene::init())
    {
        return false;
    }
    _groot = GRoot::create(this);
    _groot->retain();
    // Certifique-se de que o pacote FairyGUI foi carregado corretamente
    UIPackage::addPackage("MainMenu");
    menuComponent = UIPackage::createObject("MainMenu", "Component1")->as<GComponent>();
    _groot->addChild(menuComponent);

  //  auto visibleSize = Director::getInstance()->getVisibleSize();
   // menuComponent->setPosition(800, 400 );

   UIRoot->addChild(menuComponent); 

    // Obter referência aos botões e configurar eventos de clique
  
    return true;
}

// Callback para iniciar o jogo
