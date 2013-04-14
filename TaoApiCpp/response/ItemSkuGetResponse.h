#ifndef ITEMSKUGETRESPONSE_H
#define ITEMSKUGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Sku.h>


/**
 * @brief TOP RESPONSE API: 获取sku_id所对应的sku数据  
sku_id对应的sku要属于传入的nick对应的卖家
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkuGetResponse : public TaoResponse
{
public:
 virtual ~ItemSkuGetResponse() { }

  Sku getSku() const;
  void setSku (Sku sku);
  virtual void parseNormalResponse();

 private:
/**
 * @brief Sku
 **/
  Sku sku;

};

#endif
