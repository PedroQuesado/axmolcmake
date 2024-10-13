#ifndef __MAIN_MENU_SCENE_H__
#define __MAIN_MENU_SCENE_H__

#include "axmol.h"
#include "FairyGUI.h"  // Inclua o header correto para FairyGUI

class MainMenuScene : public ax::Scene
{
public:
    // Método estático para criar a cena
    static ax::Scene* createScene();

    // Função de inicialização (será chamada ao criar a cena)
    virtual bool init();

    CREATE_FUNC(MainMenuScene);

private:
 
    fairygui::GComponent* menuComponent;
};

#endif  
