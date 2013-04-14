#ifndef ITEMADDRESPONSE_H
#define ITEMADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 此接口用于新增一个商品  
商品所属的卖家是当前会话的用户  
商品的属性和sku的属性有包含的关系，商品的价格要位于sku的价格区间之中（例如，sku价格有5元、10元两种，那么商品的价格就需要大于等于5元，小于等于10元，否则新增商品会失败）  
商品的类目和商品的价格、sku的价格都有一定的相关性（具体的关系要通过类目属性查询接口获得）  
商品的运费承担方式和邮费设置有相关性，卖家承担运费不用设置邮费，买家承担运费需要设置邮费  
当关键属性值选择了“其他”的时候，需要输入input_pids和input_str商品才能添加成功。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemAddResponse : public TaoResponse
{
public:
 virtual ~ItemAddResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品结构,仅有numIid和created返回
 **/
  Item item;

};

#endif
