#include <TaoApiCpp/response/VasSubscribeGetResponse.h>

QList<ArticleUserSubscribe> VasSubscribeGetResponse::getArticleUserSubscribes() const {
  return articleUserSubscribes;
}
void VasSubscribeGetResponse::setArticleUserSubscribes (QList<ArticleUserSubscribe> articleUserSubscribes) {
  this->articleUserSubscribes = articleUserSubscribes;
}

void VasSubscribeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("article_user_subscribes")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("article_user_subscribes");
  Parser *parser;
  foreach (parser, listParser) {
    ArticleUserSubscribe tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    articleUserSubscribes.append(tmp);
  }
  }

}

