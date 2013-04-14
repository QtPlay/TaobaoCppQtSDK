#include <TaoApiCpp/response/EmaiSubcatsSearchResponse.h>

QList<TmallTmCat> EmaiSubcatsSearchResponse::getCatList() const {
  return catList;
}
void EmaiSubcatsSearchResponse::setCatList (QList<TmallTmCat> catList) {
  this->catList = catList;
}

void EmaiSubcatsSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("cat_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("cat_list");
  Parser *parser;
  foreach (parser, listParser) {
    TmallTmCat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    catList.append(tmp);
  }
  }

}

