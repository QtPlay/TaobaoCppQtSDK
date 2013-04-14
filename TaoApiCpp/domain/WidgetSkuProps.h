#ifndef WIDGETSKUPROPS_H
#define WIDGETSKUPROPS_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief Widget使用的sku属性对应信息结构体
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WidgetSkuProps : public TaoDomain
{

public:
 virtual ~WidgetSkuProps() { }

  QString getAlias() const;
  void setAlias (QString alias);
  QString getKeyName() const;
  void setKeyName (QString keyName);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  qlonglong getPropKey() const;
  void setPropKey (qlonglong propKey);
  qlonglong getPropValue() const;
  void setPropValue (qlonglong propValue);
  QString getValueName() const;
  void setValueName (QString valueName);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品的属性值别名，对应商品中的property_alias字段中的别名部分
 **/
  QString alias;

/**
 * @brief 属性id对应的属性名称，对应类目属性中的属性名称
 **/
  QString keyName;

/**
 * @brief 商品属性图片地址，对应Item中的propImgs，卖家设置了商品属性图片就有此字段，未设置此字段为空
 **/
  QString picUrl;

/**
 * @brief 淘宝的属性id，对应类目属性中的pid
 **/
  qlonglong propKey;

/**
 * @brief 淘宝的属性值id，对应类目属性中的vid
 **/
  qlonglong propValue;

/**
 * @brief 属性值id对应的属性标准名称，对应类目属性中的属性值名称
 **/
  QString valueName;

};

#endif  /* WIDGETSKUPROPS_H */
