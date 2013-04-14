#include <TaoApiCpp/response/VasSubscSearchResponse.h>

QList<ArticleSub> VasSubscSearchResponse::getArticleSubs() const {
  return articleSubs;
}
void VasSubscSearchResponse::setArticleSubs (QList<ArticleSub> articleSubs) {
  this->articleSubs = articleSubs;
}
qlonglong VasSubscSearchResponse::getTotalItem() const {
  return totalItem;
}
void VasSubscSearchResponse::setTotalItem (qlonglong totalItem) {
  this->totalItem = totalItem;
}

void VasSubscSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("article_subs")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("article_subs");
  Parser *parser;
  foreach (parser, listParser) {
    ArticleSub tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    articleSubs.append(tmp);
  }
  }
  if (responseParser->hasName("total_item")) {
  totalItem = responseParser->getNumByName("total_item");
  }

}

