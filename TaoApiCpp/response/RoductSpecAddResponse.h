#ifndef RODUCTSPECADDRESPONSE_H
#define RODUCTSPECADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ProductSpec.h>


/**
 * @brief TOP RESPONSE API: 增加产品规格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoductSpecAddResponse : public TaoResponse
{
public:
 virtual ~RoductSpecAddResponse() { }

  ProductSpec getProductSpec() const;
  void setProductSpec (ProductSpec productSpec);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 产品规格对象
 **/
  ProductSpec productSpec;

};

#endif
