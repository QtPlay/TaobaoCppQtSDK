#ifndef FENXIAOPDU_H
#define FENXIAOPDU_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 产品分销商属性
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoPdu : public TaoDomain
{

public:
 virtual ~FenxiaoPdu() { }

  qlonglong getDistributorId() const;
  void setDistributorId (qlonglong distributorId);
  QString getDistributorName() const;
  void setDistributorName (QString distributorName);
  qlonglong getProductId() const;
  void setProductId (qlonglong productId);
  qlonglong getQuantityAgent() const;
  void setQuantityAgent (qlonglong quantityAgent);
  QString getSkuProperties() const;
  void setSkuProperties (QString skuProperties);
  
  virtual void parseResponse();

private:
/**
 * @brief 分销商ID
 **/
  qlonglong distributorId;

/**
 * @brief 分销商用户名
 **/
  QString distributorName;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief 产品代销配额库存
 **/
  qlonglong quantityAgent;

/**
 * @brief 产品销售属性值
 **/
  QString skuProperties;

};

#endif  /* FENXIAOPDU_H */
