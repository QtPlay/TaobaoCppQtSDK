#include <TaoApiCpp/TaoApiInfo.h>
#include <TaoApiCpp/request/ItemGetRequest.h>
#include <QDebug>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QCoreApplication app(argc, argv);

  //TaoApiInfo类的构造函数请看相关文档
  TaoApiInfo test("http://gw.api.taobao.com/router/rest", "21307237",
                  "754bd2119ea04ad1de47c03668e9f56b", Constants::FORMAT_XML);
  setDefaultTaoApiInfo(&test);

  ItemGetRequest xx;
  xx.setFields("detail_url,num_iid,title,nick,type,cid,seller_cids,props");
  xx.setNumIid(9718410449);

  // 如果有session,则 xx.getResponseClass(session, "")
  // 如果用的是https+accessToken连接，则xx.getResponseClass(accessToken, "")
  ItemGetResponse *yy = xx.getResponseClass();

  Item item = yy->getItem();
  qDebug() << item.getDetailUrl() << "\n" << item.getTitle();

  // if error, use xx->getResponseStr
  qDebug() << xx.getResponseStr();

  delete yy;
  return app.exec();
}
