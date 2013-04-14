#ifndef PROPIMG_H
#define PROPIMG_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 商品属性图片结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PropImg : public TaoDomain
{

public:
 virtual ~PropImg() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getId() const;
  void setId (qlonglong id);
  qlonglong getPosition() const;
  void setPosition (qlonglong position);
  QString getProperties() const;
  void setProperties (QString properties);
  QString getUrl() const;
  void setUrl (QString url);
  
  virtual void parseResponse();

private:
/**
 * @brief 图片创建时间 时间格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 属性图片的id，和商品相对应
 **/
  qlonglong id;

/**
 * @brief 图片放在第几张（多图时可设置）
 **/
  qlonglong position;

/**
 * @brief 图片所对应的属性组合的字符串
 **/
  QString properties;

/**
 * @brief 图片链接地址
 **/
  QString url;

};

#endif  /* PROPIMG_H */
