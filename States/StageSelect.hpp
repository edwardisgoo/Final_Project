#ifndef STAGESELECTSCENE_HPP
#define STAGESELECTSCENE_HPP
#include <allegro5/allegro_audio.h>
#include <memory>

#include "Engine/IScene.hpp"

class StageSelect final : public Engine::IScene {
private:
    std::shared_ptr<ALLEGRO_SAMPLE_INSTANCE> bgmInstance;

public:
    explicit StageSelect() = default;
    void Initialize() override;
    void Terminate() override;
    void PlayOnClick(int stage);
    void BackOnClick(int stage);
    void Draw() const;
    /*
    void ScoreboardOnClick();
    void BGMSlideOnValueChanged(float value);
    void SFXSlideOnValueChanged(float value);
    */
};

#endif   // STAGESELECTSCENE_HPP
