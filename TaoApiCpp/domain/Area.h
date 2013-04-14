#ifndef AREA_H
#define AREA_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 地址区域结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Area : public TaoDomain
{

public:
 virtual ~Area() { }

  qlonglong getId() const;
  void setId (qlonglong id);
  QString getName() const;
  void setName (QString name);
  qlonglong getParentId() const;
  void setParentId (qlonglong parentId);
  qlonglong getType() const;
  void setType (qlonglong type);
  QString getZip() const;
  void setZip (QString zip);
  
  virtual void parseResponse();

private:
/**
 * @brief 标准行政区域代码.参考:http://www.stats.gov.cn/tjbz/xzqhdm/t20120105_402777427.htm
 **/
  qlonglong id;

/**
 * @brief 地域名称.如北京市,杭州市,西湖区,每一个area_id 都代表了一个具体的地区.
 **/
  QString name;

/**
 * @brief 父节点区域标识.如北京市的area_id是110100,朝阳区是北京市的一个区,所以朝阳区的parent_id就是北京市的area_id.
 **/
  qlonglong parentId;

/**
 * @brief 区域类型.area区域 1:country/国家;2:province/省/自治区/直辖市;3:city/地区(省下面的地级市);4:district/县/市(县级市)/区;abroad:海外. 比如北京市的area_type = 2,朝阳区是北京市的一个区,所以朝阳区的area_type = 4.
 **/
  qlonglong type;

/**
 * @brief 具体一个地区的邮编
 **/
  QString zip;

};

#endif  /* AREA_H */
