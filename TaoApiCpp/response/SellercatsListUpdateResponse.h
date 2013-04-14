#ifndef SELLERCATSLISTUPDATERESPONSE_H
#define SELLERCATSLISTUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SellerCat.h>


/**
 * @brief TOP RESPONSE API: 此API更新卖家店铺内自定义类目  
注：因为缓存的关系，添加的新类目需8个小时后才可以在淘宝页面上正常显示，但是不影响在该类目下商品发布
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercatsListUpdateResponse : public TaoResponse
{
public:
 virtual ~SellercatsListUpdateResponse() { }

  SellerCat getSellerCat() const;
  void setSellerCat (SellerCat sellerCat);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回sellercat数据结构中的：cid,modified
 **/
  SellerCat sellerCat;

};

#endif
