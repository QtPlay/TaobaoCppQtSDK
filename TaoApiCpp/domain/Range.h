#ifndef RANGE_H
#define RANGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 营销工具的范围类！
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Range : public TaoDomain
{

public:
 virtual ~Range() { }

  qlonglong getParticipateId() const;
  void setParticipateId (qlonglong participateId);
  qlonglong getParticipateType() const;
  void setParticipateType (qlonglong participateType);
  
  virtual void parseResponse();

private:
/**
 * @brief 营销范围参与者id。即MarketingRangeDO中的participateId。
 **/
  qlonglong participateId;

/**
 * @brief 营销范围参与者类型。MarketingRangeDO中的participateType。(1:商品;2:店铺;3:seller;4:sku;5:category;6:shopCategory)
 **/
  qlonglong participateType;

};

#endif  /* RANGE_H */
