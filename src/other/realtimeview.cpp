#include "realtimeview.h"

#include "custom/debug.h"

RealtimeView::RealtimeView()
{
  ALERT("RealtimeView::RealtimeView()", "Stub");
}

void RealtimeView::SetUserMaxLOD(float)
{
  ALERT("void RealtimeView::SetUserMaxLOD(float)", "Stub");
}

void RealtimeView::SetPartsThreshold(float)
{
  ALERT("void RealtimeView::SetPartsThreshold(float)", "Stub");
}

float RealtimeView::GetUserMaxLOD()
{
  ALERT("float RealtimeView::GetUseMaxLOD()", "Stub");
  return 0.0f;
}

float RealtimeView::GetPartsThreshold()
{
  ALERT("float RealtimeView::GetPartsThreshold()", "Stub");
  return 0.0f;
}
