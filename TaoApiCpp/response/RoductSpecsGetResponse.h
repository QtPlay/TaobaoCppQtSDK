#ifndef RODUCTSPECSGETRESPONSE_H
#define RODUCTSPECSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ProductSpec.h>


/**
 * @brief TOP RESPONSE API: 按productID下载或品牌下载产品规格，返回一组的产品规格信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoductSpecsGetResponse : public TaoResponse
{
public:
 virtual ~RoductSpecsGetResponse() { }

  QList<ProductSpec> getProductSpecs() const;
  void setProductSpecs (QList<ProductSpec> productSpecs);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回一组产品规格信息。
 **/
  QList<ProductSpec> productSpecs;

};

#endif
