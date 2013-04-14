#ifndef TRAVELITEMSAREANODE_H
#define TRAVELITEMSAREANODE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/TravelItemsPropValue.h>


/**
 * @brief 旅游度假商品地区结构。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TravelItemsAreaNode : public TaoDomain
{

public:
 virtual ~TravelItemsAreaNode() { }

  QList<TravelItemsPropValue> getSubPropValues() const;
  void setSubPropValues (QList<TravelItemsPropValue> subPropValues);
  TravelItemsPropValue getTravelItemsPropValue() const;
  void setTravelItemsPropValue (TravelItemsPropValue travelItemsPropValue);
  
  virtual void parseResponse();

private:
/**
 * @brief 该地区下所有下级地区集合(目前地区只有两级，国内：省-市；国际： 国家-城市)。
 **/
  QList<TravelItemsPropValue> subPropValues;

/**
 * @brief 地区属性值。
 **/
  TravelItemsPropValue travelItemsPropValue;

};

#endif  /* TRAVELITEMSAREANODE_H */
