#include <TaoApiCpp/response/MarketingTagsGetResponse.h>

QList<UserTag> MarketingTagsGetResponse::getUserTags() const {
  return userTags;
}
void MarketingTagsGetResponse::setUserTags (QList<UserTag> userTags) {
  this->userTags = userTags;
}

void MarketingTagsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("user_tags")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("user_tags");
  Parser *parser;
  foreach (parser, listParser) {
    UserTag tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    userTags.append(tmp);
  }
  }

}

