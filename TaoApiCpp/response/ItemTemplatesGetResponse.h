#ifndef ITEMTEMPLATESGETRESPONSE_H
#define ITEMTEMPLATESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ItemTemplate.h>


/**
 * @brief TOP RESPONSE API: 查询当前登录用户的店铺的宝贝详情页的模板名称
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemTemplatesGetResponse : public TaoResponse
{
public:
 virtual ~ItemTemplatesGetResponse() { }

  QList<ItemTemplate> getItemTemplateList() const;
  void setItemTemplateList (QList<ItemTemplate> itemTemplateList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回宝贝模板对象。包含模板id，模板name，还有模板的类别（0表示外店，1表示内店）
 **/
  QList<ItemTemplate> itemTemplateList;

};

#endif
