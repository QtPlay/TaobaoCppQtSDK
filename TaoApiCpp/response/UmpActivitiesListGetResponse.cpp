#include <TaoApiCpp/response/UmpActivitiesListGetResponse.h>

QList<QString> UmpActivitiesListGetResponse::getActivities() const {
  return activities;
}
void UmpActivitiesListGetResponse::setActivities (QList<QString> activities) {
  this->activities = activities;
}

void UmpActivitiesListGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("activities")) {
  activities = responseParser->getListStrByName("activities");
  }

}

