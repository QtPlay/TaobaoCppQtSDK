#ifndef SELLERCATSLISTGETRESPONSE_H
#define SELLERCATSLISTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/SellerCat.h>


/**
 * @brief TOP RESPONSE API: 此API获取当前卖家店铺在淘宝前端被展示的浏览导航类目（面向买家）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercatsListGetResponse : public TaoResponse
{
public:
 virtual ~SellercatsListGetResponse() { }

  QList<SellerCat> getSellerCats() const;
  void setSellerCats (QList<SellerCat> sellerCats);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 卖家自定义类目
 **/
  QList<SellerCat> sellerCats;

};

#endif
