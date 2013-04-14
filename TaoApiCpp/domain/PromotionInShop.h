#ifndef PROMOTIONINSHOP_H
#define PROMOTIONINSHOP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 店铺级优惠信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionInShop : public TaoDomain
{

public:
 virtual ~PromotionInShop() { }

  QString getName() const;
  void setName (QString name);
  QString getPromotionDetailDesc() const;
  void setPromotionDetailDesc (QString promotionDetailDesc);
  QString getPromotionId() const;
  void setPromotionId (QString promotionId);
  
  virtual void parseResponse();

private:
/**
 * @brief 优惠活动名称
 **/
  QString name;

/**
 * @brief 优惠详情描述。
 **/
  QString promotionDetailDesc;

/**
 * @brief idValue值
 **/
  QString promotionId;

};

#endif  /* PROMOTIONINSHOP_H */
