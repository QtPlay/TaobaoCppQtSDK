#ifndef SKUSCUSTOMGETRESPONSE_H
#define SKUSCUSTOMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Sku.h>


/**
 * @brief TOP RESPONSE API: 跟据卖家设定的Sku的外部id获取商品，如果一个outer_id对应多个Sku会返回所有符合条件的sku  
这个Sku所属卖家从传入的session中获取，需要session绑定(注：iid标签里是num_iid的值，可以用作num_iid使用)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SkusCustomGetResponse : public TaoResponse
{
public:
 virtual ~SkusCustomGetResponse() { }

  QList<Sku> getSkus() const;
  void setSkus (QList<Sku> skus);
  virtual void parseNormalResponse();

 private:
/**
 * @brief Sku对象，具体字段以fields决定
 **/
  QList<Sku> skus;

};

#endif
