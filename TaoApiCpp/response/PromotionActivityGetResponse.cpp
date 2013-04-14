#include <TaoApiCpp/response/PromotionActivityGetResponse.h>

QList<Activity> PromotionActivityGetResponse::getActivitys() const {
  return activitys;
}
void PromotionActivityGetResponse::setActivitys (QList<Activity> activitys) {
  this->activitys = activitys;
}

void PromotionActivityGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("activitys")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("activitys");
  Parser *parser;
  foreach (parser, listParser) {
    Activity tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    activitys.append(tmp);
  }
  }

}

