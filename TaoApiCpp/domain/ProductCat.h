#ifndef PRODUCTCAT_H
#define PRODUCTCAT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 产品线
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductCat : public TaoDomain
{

public:
 virtual ~ProductCat() { }

  QString getCostPercentAgent() const;
  void setCostPercentAgent (QString costPercentAgent);
  QString getCostPercentDealer() const;
  void setCostPercentDealer (QString costPercentDealer);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getName() const;
  void setName (QString name);
  qlonglong getProductNum() const;
  void setProductNum (qlonglong productNum);
  QString getRetailHighPercent() const;
  void setRetailHighPercent (QString retailHighPercent);
  QString getRetailLowPercent() const;
  void setRetailLowPercent (QString retailLowPercent);
  
  virtual void parseResponse();

private:
/**
 * @brief 代销采购价百分比
 **/
  QString costPercentAgent;

/**
 * @brief 经销采购价百分比
 **/
  QString costPercentDealer;

/**
 * @brief 产品线ID
 **/
  qlonglong id;

/**
 * @brief 产品线名称
 **/
  QString name;

/**
 * @brief 产品数量
 **/
  qlonglong productNum;

/**
 * @brief 最高零食价百分比
 **/
  QString retailHighPercent;

/**
 * @brief 最低零售价百分比
 **/
  QString retailLowPercent;

};

#endif  /* PRODUCTCAT_H */
