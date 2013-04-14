#ifndef ITEMTEMPLATE_H
#define ITEMTEMPLATE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 宝贝详情页面信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemTemplate : public TaoDomain
{

public:
 virtual ~ItemTemplate() { }

  qlonglong getShopType() const;
  void setShopType (qlonglong shopType);
  qlonglong getTemplateId() const;
  void setTemplateId (qlonglong templateId);
  QString getTemplateName() const;
  void setTemplateName (QString templateName);
  
  virtual void parseResponse();

private:
/**
 * @brief 用于区分宝贝模板属于内店和外店
 **/
  qlonglong shopType;

/**
 * @brief 宝贝模板的id
 **/
  qlonglong templateId;

/**
 * @brief 宝贝详情模板的名称
 **/
  QString templateName;

};

#endif  /* ITEMTEMPLATE_H */
