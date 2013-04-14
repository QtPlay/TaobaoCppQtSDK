#ifndef PRODUCTPROPIMG_H
#define PRODUCTPROPIMG_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 产品属性图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductPropImg : public TaoDomain
{

public:
 virtual ~ProductPropImg() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getId() const;
  void setId (qlonglong id);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getPosition() const;
  void setPosition (qlonglong position);
  qlonglong getProductId() const;
  void setProductId (qlonglong productId);
  QString getProps() const;
  void setProps (QString props);
  QString getUrl() const;
  void setUrl (QString url);
  
  virtual void parseResponse();

private:
/**
 * @brief 添加时间.格式:yyyy-mm-dd hh:mm:ss
 **/
  QDateTime created;

/**
 * @brief 产品属性图片ID
 **/
  qlonglong id;

/**
 * @brief 修改时间.格式:yyyy-mm-dd hh:mm:ss
 **/
  QDateTime modified;

/**
 * @brief 图片序号。产品里的图片展示顺序，数据越小越靠前。要求是正整数。
 **/
  qlonglong position;

/**
 * @brief 图片所属产品的ID
 **/
  qlonglong productId;

/**
 * @brief 属性串(pid:vid),目前只有颜色属性.如:颜色:红色表示为　1627207:28326
 **/
  QString props;

/**
 * @brief 图片地址.(绝对地址,格式:http://host/image_path)
 **/
  QString url;

};

#endif  /* PRODUCTPROPIMG_H */
