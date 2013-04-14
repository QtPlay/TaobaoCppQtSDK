#ifndef ITEMSKUPRICEUPDATERESPONSE_H
#define ITEMSKUPRICEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Sku.h>


/**
 * @brief TOP RESPONSE API: 更新商品SKU的价格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkuPriceUpdateResponse : public TaoResponse
{
public:
 virtual ~ItemSkuPriceUpdateResponse() { }

  Sku getSku() const;
  void setSku (Sku sku);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品SKU信息（只包含num_iid和modified）
 **/
  Sku sku;

};

#endif
