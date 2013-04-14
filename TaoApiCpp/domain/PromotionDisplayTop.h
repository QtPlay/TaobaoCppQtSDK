#ifndef PROMOTIONDISPLAYTOP_H
#define PROMOTIONDISPLAYTOP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/PromotionInItem.h>
#include <TaoApiCpp/domain/PromotionInShop.h>


/**
 * @brief 优惠信息对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionDisplayTop : public TaoDomain
{

public:
 virtual ~PromotionDisplayTop() { }

  QList<PromotionInItem> getPromotionInItem() const;
  void setPromotionInItem (QList<PromotionInItem> promotionInItem);
  QList<PromotionInShop> getPromotionInShop() const;
  void setPromotionInShop (QList<PromotionInShop> promotionInShop);
  
  virtual void parseResponse();

private:
/**
 * @brief 单品级优惠信息
 **/
  QList<PromotionInItem> promotionInItem;

/**
 * @brief 店铺级优惠信息
 **/
  QList<PromotionInShop> promotionInShop;

};

#endif  /* PROMOTIONDISPLAYTOP_H */
