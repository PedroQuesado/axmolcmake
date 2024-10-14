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

    // Certifique-se de que o pacote FairyGUI foi carregado corretamente
    UIPackage::addPackage("MainMenu");

    // Criar o componente principal do menu a partir do pacote
    menuComponent = UIPackage::createObject("MainMenu", "Component1")->as<GComponent>();
    if (!menuComponent)
    {
        AXLOG("Falha ao criar menuComponent");
        return false;
    }

  //  auto visibleSize = Director::getInstance()->getVisibleSize();
   // menuComponent->setPosition(800, 400 );

    GRoot::getInstance()->addChild(menuComponent);

    // Obter referência aos botões e configurar eventos de clique
  
    return true;
}

// Callback para iniciar o jogo
