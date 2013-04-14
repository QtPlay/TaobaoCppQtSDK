#ifndef FENXIAOPRODUCTSKUSGETRESPONSE_H
#define FENXIAOPRODUCTSKUSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FenxiaoSku.h>


/**
 * @brief TOP RESPONSE API: 产品sku查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductSkusGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductSkusGetResponse() { }

  QList<FenxiaoSku> getSkus() const;
  void setSkus (QList<FenxiaoSku> skus);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief sku信息
 **/
  QList<FenxiaoSku> skus;

/**
 * @brief 记录数量
 **/
  qlonglong totalResults;

};

#endif
