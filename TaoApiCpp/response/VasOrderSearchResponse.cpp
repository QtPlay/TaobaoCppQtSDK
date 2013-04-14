#include <TaoApiCpp/response/VasOrderSearchResponse.h>

QList<ArticleBizOrder> VasOrderSearchResponse::getArticleBizOrders() const {
  return articleBizOrders;
}
void VasOrderSearchResponse::setArticleBizOrders (QList<ArticleBizOrder> articleBizOrders) {
  this->articleBizOrders = articleBizOrders;
}
qlonglong VasOrderSearchResponse::getTotalItem() const {
  return totalItem;
}
void VasOrderSearchResponse::setTotalItem (qlonglong totalItem) {
  this->totalItem = totalItem;
}

void VasOrderSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("article_biz_orders")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("article_biz_orders");
  Parser *parser;
  foreach (parser, listParser) {
    ArticleBizOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    articleBizOrders.append(tmp);
  }
  }
  if (responseParser->hasName("total_item")) {
  totalItem = responseParser->getNumByName("total_item");
  }

}

