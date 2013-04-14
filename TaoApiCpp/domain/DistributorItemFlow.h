#ifndef DISTRIBUTORITEMFLOW_H
#define DISTRIBUTORITEMFLOW_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 分销商品流量
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DistributorItemFlow : public TaoDomain
{

public:
 virtual ~DistributorItemFlow() { }

  QString getItemPv() const;
  void setItemPv (QString itemPv);
  QString getItemUv() const;
  void setItemUv (QString itemUv);
  qlonglong getProductId() const;
  void setProductId (qlonglong productId);
  
  virtual void parseResponse();

private:
/**
 * @brief 分销商商品PV。返回KV串中可能不足一周数据，如新上架商品、中间下架以及删除等操作导致。
 **/
  QString itemPv;

/**
 * @brief 分销商商品UV。返回KV串中可能不足一周数据，如新上架商品、中间下架以及删除等操作导致。
 **/
  QString itemUv;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

};

#endif  /* DISTRIBUTORITEMFLOW_H */
