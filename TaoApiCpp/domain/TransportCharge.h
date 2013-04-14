#ifndef TRANSPORTCHARGE_H
#define TRANSPORTCHARGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 运输费用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TransportCharge : public TaoDomain
{

public:
 virtual ~TransportCharge() { }

  QString getCost() const;
  void setCost (QString cost);
  QString getCostBy() const;
  void setCostBy (QString costBy);
  QString getOriginalCost() const;
  void setOriginalCost (QString originalCost);
  QString getSavedCost() const;
  void setSavedCost (QString savedCost);
  
  virtual void parseResponse();

private:
/**
 * @brief 总运费
 **/
  QString cost;

/**
 * @brief 计费方式。by_weight:按重量；by_volume:按体积。
 **/
  QString costBy;

/**
 * @brief 运费原价
 **/
  QString originalCost;

/**
 * @brief 节省费用
 **/
  QString savedCost;

};

#endif  /* TRANSPORTCHARGE_H */
