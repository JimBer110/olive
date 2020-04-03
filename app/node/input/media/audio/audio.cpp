#include "audio.h"

AudioInput::AudioInput()
{
}

Node *AudioInput::copy() const
{
  return new AudioInput();
}

QString AudioInput::Name() const
{
  return tr("Audio Input");
}

QString AudioInput::id() const
{
  return QStringLiteral("org.olivevideoeditor.Olive.audioinput");
}

QString AudioInput::Description() const
{
  return tr("Import an audio footage stream.");
}
