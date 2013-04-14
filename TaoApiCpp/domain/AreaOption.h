#ifndef AREAOPTION_H
#define AREAOPTION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 直通车可推广的地域
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AreaOption : public TaoDomain
{

public:
 virtual ~AreaOption() { }

  qlonglong getAreaId() const;
  void setAreaId (qlonglong areaId);
  qlonglong getLevel() const;
  void setLevel (qlonglong level);
  QString getName() const;
  void setName (QString name);
  qlonglong getParentId() const;
  void setParentId (qlonglong parentId);
  
  virtual void parseResponse();

private:
/**
 * @brief 地域id
 **/
  qlonglong areaId;

/**
 * @brief 地域级别，目前自治区、省、直辖市是1，其他城市、地区是2
 **/
  qlonglong level;

/**
 * @brief 地域名称
 **/
  QString name;

/**
 * @brief 父地域id，若该字段为0表示该行政区为顶层，例如像北京，国外等。
 **/
  qlonglong parentId;

};

#endif  /* AREAOPTION_H */
